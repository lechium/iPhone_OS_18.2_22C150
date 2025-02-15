//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface REMeshInstanceDescriptor : NSObject
{
    unsigned int _modelIndex;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    struct REMeshLodSelectOptions _lodSelectOptions;	// 24 = 0x18
    CDStruct_14d5dc5e _transform;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000432d89
- (id).cxx_construct;	// IMP=0x000000000043340d
- (void).cxx_destruct;	// IMP=0x00000000004333fd
@property(readonly, nonatomic) struct REMeshLodSelectOptions lodSelectOptions; // @synthesize lodSelectOptions=_lodSelectOptions;
@property(readonly, nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) unsigned int modelIndex; // @synthesize modelIndex=_modelIndex;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)estimateContainerSize;	// IMP=0x000000000043333d
- (_Bool)validateWithModelCount:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000433310
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000433248
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000432e76
- (id)initWithName:(id)arg1 modelIndex:(unsigned int)arg2 transform:(CDStruct_14d5dc5e)arg3 lodSelectOptions:(struct REMeshLodSelectOptions)arg4;	// IMP=0x0000000000432d91
- (struct MeshInstance)meshInstanceWithModels:(const void *)arg1 meshManager:(void *)arg2;	// IMP=0x00000000004022cb
- (id)initWithMeshAssetInstance:(const void *)arg1;	// IMP=0x000000000040221d

@end

