//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNNodeComponent : NSObject
{
    long long type;	// 8 = 0x8
    id component;	// 16 = 0x10
    SCNNodeComponent *next;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008298b
@property(retain, nonatomic) SCNNodeComponent *next; // @synthesize next;
@property(retain, nonatomic) id component; // @synthesize component;
@property(nonatomic) long long type; // @synthesize type;
- (id)initWithType:(long long)arg1 component:(id)arg2;	// IMP=0x00000000000828ba

@end
