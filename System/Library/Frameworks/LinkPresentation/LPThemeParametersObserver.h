//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPThemeParametersObserver : NSObject
{
    NSHashTable *_clients;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x00600000000954f0
- (void).cxx_destruct;	// IMP=0x00000000000958d1
- (void)didChangeThemeParameters;	// IMP=0x00000000000956fc
- (void)removeClient:(id)arg1;	// IMP=0x00000000000956ac
- (void)addClient:(id)arg1;	// IMP=0x00000000000955ef
- (void)didChangeDarkenColorsStatus:(id)arg1;	// IMP=0x00000000000955dd
- (void)dealloc;	// IMP=0x000000000009552d
- (id)init;	// IMP=0x000000000009541c

@end
