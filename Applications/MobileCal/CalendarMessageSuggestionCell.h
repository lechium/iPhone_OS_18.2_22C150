//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarSuggestionNotification, LSApplicationRecord, NSString;

@interface CalendarMessageSuggestionCell
{
    NSString *_fromString;	// 8 = 0x8
    NSString *_dateString;	// 16 = 0x10
    NSString *_appNameString;	// 24 = 0x18
    NSString *_suggestionOriginSenderName;	// 32 = 0x20
    LSApplicationRecord *_applicationRecord;	// 40 = 0x28
}

+ (_Bool)_notificationIsCancelled:(id)arg1;	// IMP=0x00400000000be657
+ (id)actionsForNotification:(id)arg1;	// IMP=0x00100000000be54d
- (void).cxx_destruct;	// IMP=0x00200000000be9f1
- (void)_updateSuggestionPropertiesWithNotification:(id)arg1;	// IMP=0x00100000000be720
@property(retain, nonatomic) EKCalendarSuggestionNotification *notification; // @dynamic notification;
- (_Bool)notificationIsCancelled;	// IMP=0x00100000000be60e
- (_Bool)showAsCancelledOrDeclined;	// IMP=0x00100000000be5c5
- (unsigned long long)options;	// IMP=0x00100000000be5ba
- (id)actions;	// IMP=0x00100000000be4e3
- (id)_appNameString;	// IMP=0x00100000000be459
- (id)_locationString;	// IMP=0x00100000000be3a4
- (id)_dateString;	// IMP=0x00100000000be0f6
- (id)_fromString;	// IMP=0x00100000000bdef2
- (id)bodyStringDict;	// IMP=0x00100000000bdda4
- (id)titleStrings;	// IMP=0x00100000000bdcf2
- (void)updateAuthor;	// IMP=0x00100000000bdbc0
- (id)provideAuthorView;	// IMP=0x00100000000bdba7
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000bdb56

@end

