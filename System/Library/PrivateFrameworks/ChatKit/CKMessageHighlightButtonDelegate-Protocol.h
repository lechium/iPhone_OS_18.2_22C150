//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMessageHighlightButton;

@protocol CKMessageHighlightButtonDelegate <NSObject>
- (BOOL)messageHightlightButtonTranscriptOrientation:(CKMessageHighlightButton *)arg1;
- (struct CGRect)messageHightlightButtonReplyButtonFrame:(CKMessageHighlightButton *)arg1;
- (struct CGRect)messageHightlightButtonBalloonViewFrame:(CKMessageHighlightButton *)arg1;
- (void)messageHightlightButtonDidFinishAnimating:(CKMessageHighlightButton *)arg1;
- (void)messageHightlightButtonWasClicked:(CKMessageHighlightButton *)arg1;
@end

