//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarUIKit/NSObject-Protocol.h>

@class NSCalendar, NSDateComponents;

@protocol CUIKIconGenerator <NSObject>
- (struct CGImage *)iconImageWithDateComponents:(NSDateComponents *)arg1 calendar:(NSCalendar *)arg2 format:(long long)arg3 size:(struct CGSize)arg4 scale:(double)arg5 appearance:(long long)arg6;
@end
