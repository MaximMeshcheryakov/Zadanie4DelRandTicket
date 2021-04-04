Action()
{
	
	web_reg_find("Text=A First class ticket for",
        "SaveCount=First_Count",
        LAST );
	
	/* Itinerary */
	
	web_reg_save_param_ex(
    	"ParamName=NumberOfTickets", 
    	"LB/IC=<b>A total of ", 	
    	"RB/IC= scheduled flight",								
    	"Ordinal=1",
	LAST);

	web_url("Itinerary Button", 
		"URL={Host}/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_output_message("Number of tickets first class= %d",atoi(lr_eval_string("{First_Count}")));
	lr_output_message("Total number of tickets= %d",atoi(lr_eval_string("{NumberOfTickets}")));
	maxk = atoi(lr_eval_string("{First_Count}"));

	return 0;
}