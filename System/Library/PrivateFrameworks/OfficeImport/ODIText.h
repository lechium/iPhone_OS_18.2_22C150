//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIText : NSObject
{
}

+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCenteredHorizontally:(_Bool)arg3 isCenteredVertically:(_Bool)arg4 includeChildren:(_Bool)arg5 state:(id)arg6;	// IMP=0x008000000034497e
+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCentered:(_Bool)arg3 includeChildren:(_Bool)arg4 state:(id)arg5;	// IMP=0x008000000034495d
+ (void)addTextFromPoint:(id)arg1 level:(unsigned int)arg2 includeChildren:(_Bool)arg3 toShape:(id)arg4 baseListStyle:(id)arg5 state:(id)arg6;	// IMP=0x008000000034509e
+ (id)baseListStyleForPoint:(id)arg1 shape:(id)arg2 isCentered:(_Bool)arg3 state:(id)arg4;	// IMP=0x0080000000344d73

@end
