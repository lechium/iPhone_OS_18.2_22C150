//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColorScheme : NSObject
{
}

+ (void)writeColorScheme:(id)arg1 to:(id)arg2 state:(id)arg3;	// IMP=0x00800000002eee97
+ (id)colorForScheme:(id)arg1 colorMap:(id)arg2 value:(id)arg3;	// IMP=0x00800000002eece2
+ (id)colorForScheme:(id)arg1 value:(id)arg2;	// IMP=0x00800000002eecbb
+ (id)schemeColorEnumMap;	// IMP=0x0080000000190fce
+ (void)readFromXmlNode:(struct _xmlNode *)arg1 toColorScheme:(id)arg2;	// IMP=0x0080000000190dd3

@end
