//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABDrawable : NSObject
{
}

+ (id)readDrawableFromZipPackageData:(const struct CsData *)arg1 foundInObject:(id)arg2 state:(id)arg3;	// IMP=0x00800000002fe1ac
+ (void)setUpXmlDrawingState:(id)arg1 withBinaryReaderState:(id)arg2 targetDocument:(id)arg3 colorMap:(id)arg4;	// IMP=0x00800000002fdf03
+ (id)readDrawablesFromContainer:(id)arg1 state:(id)arg2;	// IMP=0x0080000000027fd4
+ (id)readDrawableFromObject:(id)arg1 state:(id)arg2;	// IMP=0x0080000000028145

@end
