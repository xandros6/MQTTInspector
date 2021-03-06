//
//  MQTTInspectorSetupSessionTableViewController.h
//  MQTTInspector
//
//  Created by Christoph Krey on 14.11.13.
//  Copyright (c) 2013 Christoph Krey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "Session+Create.h"

@interface MQTTInspectorSetupSessionTableViewController : UITableViewController <MFMailComposeViewControllerDelegate>
@property (strong, nonatomic) Session *session;

@end
