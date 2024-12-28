//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKChatItem, CKTranscriptBalloonCell, CKTranscriptCell;

@protocol CKTranscriptBalloonCellDelegate <NSObject>
- (CKTranscriptCell *)cellForChatItem:(CKChatItem *)arg1;
- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 didEndBalloonSwipeWithDelta:(double)arg2 swipeVelocity:(struct CGPoint)arg3;
- (void)transcriptBalloonCell:(CKTranscriptBalloonCell *)arg1 didTranslateBalloonByDelta:(double)arg2;
@end
