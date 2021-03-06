/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSMutableDictionary, SBAceClassMap;

@interface SBAssistantUIPluginManager : SBUnknownSuperclass {
	NSMutableDictionary *_pluginBundles;	// 4 = 0x4
	SBAceClassMap *_snippetClassMap;	// 8 = 0x8
	SBAceClassMap *_disambiguationListItemClassMap;	// 12 = 0xc
	SBAceClassMap *_providerClassMap;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x132e4d
- (id)init;	// 0x132e21
- (void)dealloc;	// 0x133b4d
- (id)_loadBundleAndGetClassNameForAceClass:(id)aceClass group:(id)group fromMap:(id)map;	// 0x133ad5
- (id)bundleForBundleIdentifier:(id)bundleIdentifier;	// 0x133a99
- (Class)snippetClassForObject:(id)object;	// 0x133a29
- (id)snippetControllerForObject:(id)object withDelegate:(id)delegate;	// 0x133949
- (id)speakableProviderForObject:(id)object;	// 0x133861
- (id)disambiguationCellForObject:(id)object context:(id)context;	// 0x1336ed
- (id)_bundleSearchPaths;	// 0x1335f5
- (void)_loadBundleMapsIfNecessary;	// 0x132ef5
- (id)_snippetMapForDomainDictionary:(id)domainDictionary inBundle:(id)bundle;	// 0x132ed5
- (id)_listItemMapForDomainDictionary:(id)domainDictionary;	// 0x132eb5
- (id)_providerMapForDomainDictionary:(id)domainDictionary;	// 0x132e95
@end
