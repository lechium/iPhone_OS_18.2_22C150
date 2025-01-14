//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CPLEngineParameters, NSArray, NSString;

@protocol CPLEngineParametersStorage <NSObject>
@property(readonly, nonatomic) NSArray *allDefinedParameters;
- (CPLEngineParameters *)parametersForLibraryIdentifier:(NSString *)arg1;
- (_Bool)removeParametersWithLibraryIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)saveParameters:(CPLEngineParameters *)arg1 error:(id *)arg2;
@end

