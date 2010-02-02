//  Copyright 2009 Todd Ditchendorf
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Cocoa/Cocoa.h>

@interface CRTwitterPlugInPrefsViewController : NSViewController {
    NSArrayController *arrayController;
    NSMutableArray *accounts;
    NSMutableArray *accountIDs;
    NSString *keychainItemName;
}

- (IBAction)toggleShowUsernames:(id)sender;

- (void)insertObject:(NSMutableDictionary *)dict inAccountsAtIndex:(NSInteger)i;
- (void)removeObjectFromAccountsAtIndex:(NSInteger)i;

@property (nonatomic, retain) IBOutlet NSArrayController *arrayController;
@property (nonatomic, retain) NSMutableArray *accounts;
@property (nonatomic, retain) NSMutableArray *accountIDs;
@property (nonatomic, copy) NSString *keychainItemName;

- (NSArray *)usernames;
- (NSString *)passwordFor:(NSString *)username;
@end
