//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ContactRequirements : NSObject
{
    _Bool _nameRequired;	// 8 = 0x8
    _Bool _phoneNumberRequired;	// 9 = 0x9
    _Bool _emailAddressRequired;	// 10 = 0xa
}

@property(readonly, nonatomic) _Bool emailAddressRequired; // @synthesize emailAddressRequired=_emailAddressRequired;
@property(readonly, nonatomic) _Bool phoneNumberRequired; // @synthesize phoneNumberRequired=_phoneNumberRequired;
@property(readonly, nonatomic) _Bool nameRequired; // @synthesize nameRequired=_nameRequired;
- (id)initWithNameRequired:(_Bool)arg1 phoneNumberRequired:(_Bool)arg2 emailAddressRequired:(_Bool)arg3;	// IMP=0x0010000000873074

@end

