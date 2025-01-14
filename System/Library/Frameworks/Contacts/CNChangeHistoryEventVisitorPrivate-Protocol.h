//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNChangeHistoryEventVisitor-Protocol.h>

@class CNChangeHistoryDifferentMeCardEvent, CNChangeHistoryLinkContactsEvent, CNChangeHistoryPreferredContactForImageEvent, CNChangeHistoryPreferredContactForNameEvent, CNChangeHistoryUnlinkContactEvent;

@protocol CNChangeHistoryEventVisitorPrivate <CNChangeHistoryEventVisitor>
- (void)visitDifferentMeCardEvent:(CNChangeHistoryDifferentMeCardEvent *)arg1;
- (void)visitPreferredContactForImageEvent:(CNChangeHistoryPreferredContactForImageEvent *)arg1;
- (void)visitPreferredContactForNameEvent:(CNChangeHistoryPreferredContactForNameEvent *)arg1;
- (void)visitUnlinkContactEvent:(CNChangeHistoryUnlinkContactEvent *)arg1;
- (void)visitLinkContactsEvent:(CNChangeHistoryLinkContactsEvent *)arg1;
@end

