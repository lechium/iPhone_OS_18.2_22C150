//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CKTextEffectCoordinatorContinuationState : NSObject
{
    MISSING_TYPE *textViewIdentifier;	// 8 = 0x8
    MISSING_TYPE *locationInAttributedText;	// 24 = 0x18
    MISSING_TYPE *ignoreTextViewEligibilityCheck;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008182c0
- (id)init;	// IMP=0x0000000000818240
- (id)initWithTextViewIdentifier:(id)arg1 locationInAttributedText:(long long)arg2 ignoreTextViewEligibilityCheck:(_Bool)arg3;	// IMP=0x00000000008181d0
@property(nonatomic, readonly) NSString *debugDescription;

@end
