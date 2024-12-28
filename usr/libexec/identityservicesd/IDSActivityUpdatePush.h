//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSActivityUpdatePush : NSObject
{
    _Bool _activityStatus;	// 8 = 0x8
    NSString *_activityTopic;	// 16 = 0x10
    NSData *_token;	// 24 = 0x18
    NSString *_activitySubActivity;	// 32 = 0x20
    NSData *_metadataBlob;	// 40 = 0x28
    long long _activityTimestamp;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000015eaae
@property(nonatomic) long long activityTimestamp; // @synthesize activityTimestamp=_activityTimestamp;
@property(nonatomic) _Bool activityStatus; // @synthesize activityStatus=_activityStatus;
// Error: Property attributes should begin with the type ('T') attribute, property name: metadataBlob
// Property attributes: (null)

@property(retain, nonatomic) NSString *activitySubActivity; // @synthesize activitySubActivity=_activitySubActivity;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *activityTopic; // @synthesize activityTopic=_activityTopic;

@end
