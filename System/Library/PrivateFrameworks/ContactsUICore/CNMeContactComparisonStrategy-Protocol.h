//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContact, CNContactStore, NSArray;

@protocol CNMeContactComparisonStrategy <NSObject>
- (_Bool)isMeContact:(CNContact *)arg1;
- (NSArray *)meContactIdentifiers;
- (void)meContactChangedInStore:(CNContactStore *)arg1;
@end

