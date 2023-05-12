using System.Collections;
using System.Collections.Generic;
using Firebase.Firestore;
using UnityEngine.UI;
using TMPro;
using UnityEngine;

[FirestoreData]

public class NoticeBoardData 
{
    [FirestoreProperty]
    public string messageText1 { get; set; }
}

public class NoticeBoard: MonoBehaviour
{
    [SerializeField] private string _messagePath = "notice-board/messages/";
    [SerializeField] public TMP_InputField input_text;
    [SerializeField] public Button Submit;
    [SerializeField] public TMP_Text messageText;
    [SerializeField] private List<string> messages = new List<string>();

    void Start()
    {
        Submit.onClick.AddListener(() =>{
            var noticeBoardData = new NoticeBoardData {
                messageText1 = input_text.text
            };

            var firestore = FirebaseFirestore.DefaultInstance;
            firestore.Document(_messagePath).SetAsync(noticeBoardData);
            // show messages
            messages.Add(input_text.text);
            freshMessages();
        });

        // freshMessages();
    }

    void freshMessages() {
        int start = 0;
        if (messages.Count > 25) {start = messages.Count-25;}
        string allMessage = "";
        for (int i=start; i<messages.Count; i++) {
            allMessage += " ";
            allMessage += messages[i];
            allMessage += "\r\n";
        }
        messageText.text = allMessage;
        input_text.text = "";
    }
}