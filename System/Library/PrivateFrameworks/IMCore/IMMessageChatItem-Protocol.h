//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMFallibleChatItem-Protocol.h>

@class IMHandle, NSDate;

@protocol IMMessageChatItem <IMFallibleChatItem>
@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) _Bool failed;
@property(readonly, nonatomic) _Bool isFromMe;
@end

