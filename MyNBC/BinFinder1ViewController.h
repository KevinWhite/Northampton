//
//  BinFinder1ViewController.h
//  MyNBC
//
//  Created by Kevin White on 07/12/2011.
//  Copyright 2011 Northampton Borough Council. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <AudioToolbox/AudioToolbox.h>

@interface BinFinder1ViewController : UIViewController<UIPickerViewDelegate> {
    
    NSURLConnection *nbcBinConnection;
    
@private
    NSArray *numbers;
    NSArray *alphabet;
    NSString *postCode;
    NSMutableData *xmlData;
    IBOutlet UILabel *screenText;
    IBOutlet UIButton *button;
    IBOutlet UIPickerView *postcodePicker;
    bool awaitingResponse;
    UIActivityIndicatorView *indicator;
}

- (IBAction)submitPostCode:(id)sender;
- (void)requestFailed;

@end
