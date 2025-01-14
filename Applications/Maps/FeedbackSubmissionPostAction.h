//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FeedbackSubmissionPostAction : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSString *_communityIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000298c9b
- (void).cxx_destruct;	// IMP=0x0020000000298cdd
@property(copy, nonatomic) NSString *communityIdentifier; // @synthesize communityIdentifier=_communityIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)performActionWithFeedbackResponse:(id)arg1 feedbackRequest:(id)arg2;	// IMP=0x0010000000298ca3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000298bed
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000298ada

@end

