//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFContentItemChangeTransaction.h"

@class CNMutableContact, NSArray;

__attribute__((visibility("hidden")))
@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction
{
    CNMutableContact *_mutableContact;	// 8 = 0x8
    NSArray *_groupChangeRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b1b40
@property(retain, nonatomic) NSArray *groupChangeRequest; // @synthesize groupChangeRequest=_groupChangeRequest;
@property(readonly, nonatomic) CNMutableContact *mutableContact; // @synthesize mutableContact=_mutableContact;
- (void)updateURLs:(id)arg1;	// IMP=0x00000000000b174e
- (void)updateStreetAddresses:(id)arg1;	// IMP=0x00000000000b1392
- (void)updateEmailAddresses:(id)arg1;	// IMP=0x00000000000b0fd6
- (void)updatePhoneNumbers:(id)arg1;	// IMP=0x00000000000b0c1a
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1 isNew:(_Bool)arg2;	// IMP=0x00000000000b0568
- (id)initWithContentItem:(id)arg1;	// IMP=0x00000000000b0399

@end

