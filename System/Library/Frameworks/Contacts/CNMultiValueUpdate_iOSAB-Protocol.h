//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNMultiValueUpdate-Protocol.h>

@class CNMultiValuePropertyDescription;
@protocol CNContactsLogger;

@protocol CNMultiValueUpdate_iOSAB <CNMultiValueUpdate>
- (_Bool)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(CNMultiValuePropertyDescription *)arg3 isUnified:(_Bool)arg4 logger:(id <CNContactsLogger>)arg5 error:(id *)arg6;
@end
