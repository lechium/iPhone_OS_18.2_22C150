//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperElementFactory : NSObject
{
}

+ (unsigned long long)elementTypeByTagName:(id)arg1;	// IMP=0x008000000000a545
+ (Class)elementClassByTagName:(id)arg1;	// IMP=0x008000000000a52c
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2;	// IMP=0x008000000000a427
+ (void)initialize;	// IMP=0x008000000000a394
+ (id)sharedInstance;	// IMP=0x008000000000a30f
- (Class)classForXMLNode:(struct _xmlNode *)arg1 error:(id *)arg2;	// IMP=0x000000000000a47e

@end

