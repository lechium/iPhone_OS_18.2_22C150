//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContact, CNContactFetchRequest, CNSaveRequest, NSArray;

@protocol CNUICoreContactStoreFacade <NSObject>
- (_Bool)executeSaveRequest:(CNSaveRequest *)arg1 error:(id *)arg2;
- (_Bool)enumerateContactsWithFetchRequest:(CNContactFetchRequest *)arg1 error:(id *)arg2 usingBlock:(void (^)(CNContact *, _Bool *))arg3;
- (CNContact *)_crossPlatformUnifiedMeContactWithKeysToFetch:(NSArray *)arg1 error:(id *)arg2;
@end

