//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BKDigitizerTouchStreamAggregate : NSObject
{
    NSString *_displayUUID;	// 8 = 0x8
    NSMutableArray *_clients;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000094485
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x001000000009446f
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x00100000000943e5
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

