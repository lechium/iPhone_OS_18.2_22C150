//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COHomeKitAccessoryMemento;

__attribute__((visibility("hidden")))
@interface COMTReadAction
{
    COHomeKitAccessoryMemento *_memento;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000a569a
+ (id)actionWithTargetType:(id)arg1 targetMemento:(id)arg2;	// IMP=0x00600000000a549c
- (void).cxx_destruct;	// IMP=0x00000000000a56b3
@property(readonly, nonatomic) COHomeKitAccessoryMemento *memento; // @synthesize memento=_memento;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a561d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a5582
- (id)initWithTargetType:(id)arg1 targetMemento:(id)arg2;	// IMP=0x00000000000a550a

@end
