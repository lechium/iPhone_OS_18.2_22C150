//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSUUID;

@protocol _UIWTCTemporaryBridging <NSObject>
- (void)_wtc_highlightProofreadingReviewingRange:(struct _NSRange)arg1;
- (void)_wtc_removeUnderlineForProofreadingSuggestionID:(NSUUID *)arg1;
- (void)_wtc_underlineTextInCharacterRange:(struct _NSRange)arg1 proofreadingSuggestionID:(NSUUID *)arg2;
- (void)_wtc_invalidateSelectionUIHidden;
- (void)_wtc_invalidateGrabberSuppression;
@end

