//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MLModelAssetDescription : NSObject
{
    NSArray *_functionNames;	// 8 = 0x8
    NSDictionary *_modelDescriptionsByFunctionName;	// 16 = 0x10
    NSString *_defaultFunctionName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bfffc
@property(readonly, copy, nonatomic) NSString *defaultFunctionName; // @synthesize defaultFunctionName=_defaultFunctionName;
@property(readonly, copy, nonatomic) NSDictionary *modelDescriptionsByFunctionName; // @synthesize modelDescriptionsByFunctionName=_modelDescriptionsByFunctionName;
@property(readonly, copy, nonatomic) NSArray *functionNames; // @synthesize functionNames=_functionNames;
- (id)description;	// IMP=0x00000000001bfbce
- (id)assetDescriptionBySettingClassLabels:(id)arg1 functionName:(id)arg2;	// IMP=0x00000000001bfa14
- (id)assetDescriptionBySettingClassLabels:(id)arg1;	// IMP=0x00000000001bf979
- (id)modelDescriptionOfFunctionNamed:(id)arg1;	// IMP=0x00000000001bf6d8
@property(readonly, copy, nonatomic) MLModelDescription *defaultModelDescription;
@property(readonly, nonatomic) _Bool usesMultiFunctionSyntax;
- (id)initFromModelDescriptionSpecification:(struct _MLModelDescriptionSpecification *)arg1;	// IMP=0x00000000001bf53d
- (id)initFromModelSpecification:(struct _MLModelSpecification *)arg1;	// IMP=0x00000000001bf4a3
- (id)initWithCompiledModelArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;	// IMP=0x00000000001bf403
- (id)initWithModelDescription:(id)arg1;	// IMP=0x00000000001bf2ba
- (id)initWithRawModelDescription:(id)arg1;	// IMP=0x00000000001bec3a
- (id)initWithModelDescriptionsByFunctionName:(id)arg1 functionNames:(id)arg2 defaultFunctionName:(id)arg3;	// IMP=0x00000000001beb5c

@end

