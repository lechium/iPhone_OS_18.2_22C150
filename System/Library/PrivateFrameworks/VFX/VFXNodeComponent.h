//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VFXNodeComponent : NSObject
{
    long long type;	// 8 = 0x8
    id component;	// 16 = 0x10
    VFXNodeComponent *next;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009fbe5
@property(retain, nonatomic) VFXNodeComponent *next; // @synthesize next;
@property(retain, nonatomic) id component; // @synthesize component;
@property(nonatomic) long long type; // @synthesize type;
- (id)initWithType:(long long)arg1 component:(id)arg2;	// IMP=0x000000000009fb14

@end

