//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BackgroundRefreshConfirmationPromptToken, MISSING_TYPE;

@interface BackgroundRefreshConfirmationPromptDecision : NSObject
{
    MISSING_TYPE *shouldShowPrompt;	// 8 = 0x8
    MISSING_TYPE *token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012c4a0
- (id)init;	// IMP=0x000000000012c420
@property(nonatomic, readonly) BackgroundRefreshConfirmationPromptToken *token; // @synthesize token;
@property(nonatomic, readonly) _Bool shouldShowPrompt; // @synthesize shouldShowPrompt;

@end

