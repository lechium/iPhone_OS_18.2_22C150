//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC8EventKit26EKRemoteUISerializedObject : NSObject
{
    MISSING_TYPE *serializedObjectIDDictionary;	// 8 = 0x8
    MISSING_TYPE *objectIDToChangeSetDictionaryMap;	// 16 = 0x10
    MISSING_TYPE *objectIDToPersistentDictionaryMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000015ffc0
- (id)init;	// IMP=0x000000000015ff70
@property(nonatomic, readonly) NSDictionary *objectIDToPersistentDictionaryMap;
@property(nonatomic, readonly) NSDictionary *objectIDToChangeSetDictionaryMap;
@property(nonatomic, readonly) NSDictionary *serializedObjectIDDictionary;

@end
