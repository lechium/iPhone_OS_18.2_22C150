//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString, NSUUID;

@interface _TtC12SiriSharedUI22SiriSharedUISuggestion : _TtCs12_SwiftObject
{
    MISSING_TYPE *displayText;	// 16 = 0x10
    MISSING_TYPE *invocationText;	// 32 = 0x20
    MISSING_TYPE *suggestionId;	// 101712005 = 0x6100085
    MISSING_TYPE *suggestionData;	// 25 = 0x19
    MISSING_TYPE *autoCompleteData;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *tappedCallback;	// 0 = 0x0
}

@property(nonatomic, readonly) NSUUID *suggestionId;
@property(nonatomic, readonly) NSString *invocationText;
@property(nonatomic, readonly) NSString *displayText;

@end

