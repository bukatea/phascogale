//
//  AppDelegate.h
//  Phascogale
//
//  Created by Jonathan Lee on 9/20/22.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

- (NSString *):retrieveBitcoinPrice;
- (id)cleanJsonToObject:(id)data;

@property (assign) IBOutlet NSWindow *window;

@end

