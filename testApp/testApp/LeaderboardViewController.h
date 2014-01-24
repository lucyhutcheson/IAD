//
//  LeaderboardViewController.h
//  testApp
//
//  Created by Lucy Hutcheson on 1/23/14.
//  Copyright (c) 2014 Lucy Hutcheson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface LeaderboardViewController : UIViewController <UITableViewDelegate>
{
    IBOutlet UITableView *scoreTableView;
    NSMutableArray *userName;
    NSMutableArray *level;
    NSMutableArray *score;
    NSMutableArray *date;
    NSArray *resultArray;
}

-(IBAction)onClick:(id)sender;

@end