/*==============================================================================

Copyright (c) Laboratory for Percutaneous Surgery (PerkLab)
Queen's University, Kingston, ON, Canada. All Rights Reserved.

See COPYRIGHT.txt
or http://www.slicer.org/copyright/copyright.txt for details.

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

This file was originally developed by Kyle Sunderland, PerkLab, Queen's University

==============================================================================*/

// VTK includes
#include <vtkObjectFactory.h>

// vtkVideoIO includes
#include "vtkGenericVideoReader.h"

//---------------------------------------------------------------------------
vtkGenericVideoReader::vtkGenericVideoReader()
{
}

//---------------------------------------------------------------------------
vtkGenericVideoReader::~vtkGenericVideoReader()
{
}

//---------------------------------------------------------------------------
void vtkGenericVideoReader::PrintSelf(ostream& os, vtkIndent indent)
{
  Superclass::PrintSelf(os, indent);
}
