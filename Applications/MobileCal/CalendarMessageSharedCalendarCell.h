//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarSharedCalendarNotification;

@interface CalendarMessageSharedCalendarCell
{
}

- (unsigned long long)options;	// IMP=0x002000000012de06
- (id)actions;	// IMP=0x001000000012ddf9
- (void)updateAuthor;	// IMP=0x001000000012dd2a
- (long long)actionBodyStringAction;	// IMP=0x001000000012dce1
- (id)actionBodyString;	// IMP=0x001000000012dc29
- (id)preActionBodyStrings;	// IMP=0x001000000012db0f
- (id)bodyStringDict;	// IMP=0x001000000012dab5
- (id)titleStrings;	// IMP=0x001000000012d870
- (_Bool)_shouldShowMessage;	// IMP=0x001000000012d809

// Remaining properties
@property(retain, nonatomic) EKCalendarSharedCalendarNotification *notification; // @dynamic notification;

@end

