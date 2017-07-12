# Server
This project handles all server related responsibilities, including:
	General entry to the server-side application
	Server-side communications
	Raw client-side data validation
	Client-side data evaluation and response
	Cross-client communication management

It must NOT be responsible for:
	Client-side data storage
	Direct communication with other client applications

Considerations:
	To minimize server-side load, a client-voting protocol may be considered to outsource data validation and evaluation to client peers

Implementation priority: Low to Moderate