//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLmLoader : NSObject
{
    struct shared_ptr<quasar::LmLoader2> _loader;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00600000005f2ed5
- (id).cxx_construct;	// IMP=0x00000000005f384e
- (void).cxx_destruct;	// IMP=0x00000000005f3840
- (void)invalidate;	// IMP=0x00000000005f37cc
- (id)loadForRecognitionWithDirectory:(id)arg1 recognizer:(id)arg2 task:(id)arg3 applicationName:(id)arg4;	// IMP=0x00000000005f3358
- (id)fetchOrLoadModelWithDirectory:(id)arg1 recognizer:(id)arg2;	// IMP=0x00000000005f303a
- (id)init;	// IMP=0x00000000005f2efd

@end

