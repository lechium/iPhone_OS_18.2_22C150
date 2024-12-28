//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVFill : NSObject
{
}

+ (id)readFromManager:(id)arg1 state:(id)arg2;	// IMP=0x00800000001b1fe6
+ (id)readBlipRefFromManager:(id)arg1 state:(id)arg2;	// IMP=0x008000000022a314
+ (void)readImageFill:(id)arg1 fromManager:(id)arg2 state:(id)arg3;	// IMP=0x008000000032bab5
+ (void)readGradientFill:(id)arg1 fromManager:(id)arg2;	// IMP=0x008000000021d4b6
+ (void)addStopsFromArray:(const struct OAVGradientStop *)arg1 stopCount:(int)arg2 inverted:(_Bool)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 manager:(id)arg7;	// IMP=0x008000000021dd3d
+ (id)targetBgColorWithManager:(id)arg1;	// IMP=0x008000000022a5e6
+ (id)targetFgColorWithManager:(id)arg1;	// IMP=0x00800000001b272a

@end
