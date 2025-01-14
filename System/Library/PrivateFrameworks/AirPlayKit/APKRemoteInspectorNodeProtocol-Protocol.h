//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AirPlayKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol APKRemoteInspectorNodeProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long depth;
@property(copy, nonatomic) NSArray *children;
@property(nonatomic) int childNodeCount;
@property(copy, nonatomic) NSString *xmlVersion;
@property(copy, nonatomic) NSString *documentURL;
@property(copy, nonatomic) NSString *frameId;
@property(copy, nonatomic) NSArray *attributes;
@property(copy, nonatomic) NSString *nodeValue;
@property(copy, nonatomic) NSString *localName;
@property(copy, nonatomic) NSString *nodeName;
@property(nonatomic) int nodeType;
@property(nonatomic) int nodeId;
- (NSString *)description;
@end

