//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _UIWTCTextEffectContainerInfo : NSObject
{
    NSUUID *_lookupID;	// 8 = 0x8
    struct _NSRange _initialRange;	// 16 = 0x10
    struct _NSRange _resultRange;	// 32 = 0x20
}

+ (id)effectContainerInfoWithLookupID:(id)arg1 initialRange:(struct _NSRange)arg2;	// IMP=0x00600000005240f3
- (void).cxx_destruct;	// IMP=0x0000000000524324
@property(nonatomic) struct _NSRange resultRange; // @synthesize resultRange=_resultRange;
@property(readonly, nonatomic) struct _NSRange initialRange; // @synthesize initialRange=_initialRange;
@property(readonly, nonatomic) NSUUID *lookupID; // @synthesize lookupID=_lookupID;
- (id)description;	// IMP=0x0000000000524268
- (unsigned long long)hash;	// IMP=0x0000000000524252
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000524150
- (id)initWithLookupID:(id)arg1 initialRange:(struct _NSRange)arg2;	// IMP=0x0000000000524072

@end

