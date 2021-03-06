//
//  TSTweet.h
//  TwitterStreams
//
//  Created by Stuart Hall on 6/03/12.
//  Copyright (c) 2012 Stuart Hall. All rights reserved.
//

#import "TSStream.h"
#import "TSModel.h"
#import "TSUser.h"
#import "TSUrl.h"
#import "TSHashtag.h"

@interface TSLocationCoordinate2D : NSObject

@property (nonatomic, assign) double latitude;
@property (nonatomic, assign) double longitude;

@end

@interface TSTweet : TSModel

- (NSString*)text;

- (TSUser*)user;
- (NSArray*)userMentions;
- (NSArray*)urls;
- (NSArray*)hashtags;
- (NSNumber *)retweetCount;
- (NSNumber *)originalTweetID;
- (NSDate *)createdAt;
- (TSLocationCoordinate2D *)location;

- (void) logAllUserParams;

- (BOOL) isRetweet;
- (NSString*) extractTextFromRetweet;
- (NSString*) extractUserFromRetweet;
- (NSString*) extractPartFromTweetWithIndex:(int)index;

@end
