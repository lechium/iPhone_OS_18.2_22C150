//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddStaticIdentityAction : CNContactAction
{
    NSString *_chosenIdentity;	// 8 = 0x8
}

+ (id)supportedPasteboardTypes;	// IMP=0x006000000030a7b7
+ (_Bool)stringIsValidIdentity:(id)arg1;	// IMP=0x006000000030a7af
- (void).cxx_destruct;	// IMP=0x000000000030aafe
@property(retain, nonatomic) NSString *chosenIdentity; // @synthesize chosenIdentity=_chosenIdentity;
- (void)performActionWithSender:(id)arg1;	// IMP=0x000000000030a86c

@end
