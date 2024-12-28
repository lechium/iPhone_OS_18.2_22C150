//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class CNContact, NSArray, NSPredicate, NSString;

@protocol IMAssistantContactsDataSource <NSObject>
- (CNContact *)_crossPlatformUnifiedMeContactWithKeysToFetch:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id *)arg3;
- (CNContact *)unifiedContactWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id *)arg3;
@end
