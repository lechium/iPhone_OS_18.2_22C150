//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WFSwiftAppShortcutDataSource : NSObject
{
    MISSING_TYPE *_collections;	// 0 = 0x0
    MISSING_TYPE *appShortcutsProvider;	// 0 = 0x0
    MISSING_TYPE *organizationStyle;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002c4d26
- (id)init;	// IMP=0x00000000002c4cf1
- (void)appShortcutsChanged;	// IMP=0x00000000002c357c
- (id)fetchAppShortcutForBundleIdentifiers:(id)arg1 localeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002c2263
- (id)initWithAppShortcutsProvider:(id)arg1 denyListEnvironment:(unsigned long long)arg2 organizationStyle:(long long)arg3;	// IMP=0x00000000002bff68

@end

