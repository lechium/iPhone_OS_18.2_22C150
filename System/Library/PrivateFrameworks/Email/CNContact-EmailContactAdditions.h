//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@interface CNContact (EmailContactAdditions)
+ (id)em_bestMatchForName:(id)arg1 fromContacts:(id)arg2 keysToCheck:(id)arg3;	// IMP=0x006000000001906b
+ (id)em_contactWithPersonNameComponents:(id)arg1 emailAddress:(id)arg2 emailAddressLabel:(id)arg3 allowInvalidEmailAddress:(_Bool)arg4;	// IMP=0x0060000000018b56
+ (id)em_contactWithPersonNameComponents:(id)arg1 emailAddress:(id)arg2 emailAddressLabel:(id)arg3;	// IMP=0x0060000000018b31
+ (id)em_contactWithPersonNameComponents:(id)arg1;	// IMP=0x0060000000018b0a
+ (id)em_contactFromEmailAddress:(id)arg1;	// IMP=0x0060000000018a34
@end
