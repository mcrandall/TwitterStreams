//
//  ViewController.h
//  TwitterStreams
//
//  Created by Stuart Hall on 6/03/12.
//  Copyright (c) 2012 Stuart Hall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "TSUserStream.h"

@interface ViewController : UIViewController<UIActionSheetDelegate, TSStreamDelegate, CLLocationManagerDelegate>

@property (nonatomic, assign) IBOutlet UITableView* tableView;

@end
