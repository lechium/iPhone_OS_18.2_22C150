//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INSaveParkingLocationIntent, MISSING_TYPE;

@interface _TtC7SiriGeo34INSaveParkingLocationIntentHandler : NSObject
{
    MISSING_TYPE *logObject;	// 8 = 0x8
    MISSING_TYPE *completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001cae0
- (id)init;	// IMP=0x000000000001c9f0
- (void)handleSaveParkingLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c880
- (void)resolveParkingLocationForSaveParkingLocation:(INSaveParkingLocationIntent *)arg1 withCompletion:(void (^)(INPlacemarkResolutionResult *))arg2;	// IMP=0x000000000001bb50

@end

