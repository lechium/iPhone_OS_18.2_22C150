//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject
{
}

+ (int)vmlSupportLevel;	// IMP=0x00100000002346fc
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x00100000003b9788
+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;	// IMP=0x0010000000234704
+ (id)edTextBoxForVmlTextInShape:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;	// IMP=0x001000000023fe42
+ (id)readComment:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;	// IMP=0x00100000003b978e
+ (void)readAnchor:(struct _xmlNode *)arg1 to:(id)arg2;	// IMP=0x0010000000234bf2

@end
