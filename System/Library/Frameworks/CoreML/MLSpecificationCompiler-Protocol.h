//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLCompilerOptions, MLCompilerResult, MLVersionInfo;

@protocol MLSpecificationCompiler
+ (MLVersionInfo *)compiledVersionForSpecification:(void *)arg1 options:(MLCompilerOptions *)arg2 error:(id *)arg3;
+ (MLCompilerResult *)compileSpecification:(void *)arg1 toArchive:(void *)arg2 options:(MLCompilerOptions *)arg3 error:(id *)arg4;
@end

